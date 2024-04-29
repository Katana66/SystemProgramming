using System;
using System.Windows.Forms;
using System.Xml.Linq;
using ProductCatalogWF;
namespace ProductCatalogWF
{
    public partial class AddProductForm : Form
    {
        public AddProductForm()
        {
            InitializeComponent();
        }

        public Product GetProduct()
        {
            Product newProduct = new Product();
            newProduct.Name = txtName.Text;
            newProduct.Price = Convert.ToDouble(txtPrice.Text);
            newProduct.Quantity = Convert.ToInt32(txtQuantity.Text);
            return newProduct;
        }
    }
}
