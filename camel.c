class Program
{
    static void Main(string[] args)
    {
        string functionName = "zebulans_nightmare";
        TextInfo txtInfo = new CultureInfo("en-us", false).TextInfo;
        functionName = txtInfo.ToTitleCase(functionName).Replace('_', ' ').Replace(" ", String.Empty);
        Console.Out.WriteLine(functionName);
        Console.ReadLine();
    }
}
