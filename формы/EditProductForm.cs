using System;
using System.Windows.Forms;
using System.Xml.Linq;
using ProductCatalogWF;
namespace ProductCatalogWF
{
    public partial class EditProductForm : Form
    {
        private Product product;

        public EditProductForm(Product product)
        {
            InitializeComponent();
            this.product = product;
            txtName.Text = product.Name;
            txtPrice.Text = product.Price.ToString();
            txtQuantity.Text = product.Quantity.ToString();
        }

        public Product GetEditedProduct()
        {
            product.Name = txtName.Text;
            product.Price = Convert.ToDouble(txtPrice.Text);
            product.Quantity = Convert.ToInt32(txtQuantity.Text);
            return product;
        }
    }
}
