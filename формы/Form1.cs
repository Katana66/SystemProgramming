using System;
using System.Collections.Generic;
using System.Linq;
using System.Windows.Forms;
using ProductCatalogWF;


namespace ProductCatalogWF
{
    public partial class Form1 : Form
    {
        public class Product
        {
            public string Name { get; set; }
            public double Price { get; set; }
            public int Quantity { get; set; }
        }
        private List<Product> products = new List<Product>();
        public Form1()
        {
            InitializeComponent();
        }
        // Обработчик нажатия кнопки "Добавить товар"
        private void btnAdd_Click(object sender, EventArgs e)
        {
            AddProductForm addProductForm = new AddProductForm();
            if (addProductForm.ShowDialog() == DialogResult.OK)
            {
                Product newProduct = addProductForm.GetProduct();
                products.Add(newProduct);
                UpdateProductListView();
            }
        }

        // Обработчик нажатия кнопки "Редактировать товар"
        private void btnEdit_Click(object sender, EventArgs e)
        {
            if (lvProducts.SelectedItems.Count > 0)
            {
                int selectedIndex = lvProducts.SelectedItems[0].Index;
                Product selectedProduct = products[selectedIndex];

                EditProductForm editProductForm = new EditProductForm(selectedProduct);
                if (editProductForm.ShowDialog() == DialogResult.OK)
                {
                    Product editedProduct = editProductForm.GetEditedProduct();
                    products[selectedIndex] = editedProduct;
                    UpdateProductListView();
                }
            }
            else
            {
                MessageBox.Show("Выберите товар для редактирования.", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        // Обработчик нажатия кнопки "Удалить товар"
        private void btnDelete_Click(object sender, EventArgs e)
        {
            if (lvProducts.SelectedItems.Count > 0)
            {
                int selectedIndex = lvProducts.SelectedItems[0].Index;
                products.RemoveAt(selectedIndex);
                UpdateProductListView();
            }
            else
            {
                MessageBox.Show("Выберите товар для удаления.", "Ошибка", MessageBoxButtons.OK, MessageBoxIcon.Error);
            }
        }

        // Обновление списка товаров на форме
        private void UpdateProductListView()
        {
            lvProducts.Items.Clear();
            foreach (Product product in products)
            {
                ListViewItem item = new ListViewItem(product.Name);
                item.SubItems.Add(product.Price.ToString());
                item.SubItems.Add(product.Quantity.ToString());
                lvProducts.Items.Add(item);
            }
        }


    }
}
