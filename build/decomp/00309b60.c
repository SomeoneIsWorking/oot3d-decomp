// OoT3D decomp @ 00309b60  name=FUN_00309b60  size=88

undefined4 * FUN_00309b60(void)

{
  undefined4 *puVar1;
  int iVar2;

  if (((*DAT_00309bb8 & 1) == 0) &&
     (iVar2 = FUN_003679b4(DAT_00309bb8), puVar1 = DAT_00309bbc, iVar2 != 0)) {
    *DAT_00309bbc = 0;
    puVar1[1] = puVar1 + 1;
    puVar1[2] = puVar1 + 1;
  }
  return DAT_00309bbc;
}
