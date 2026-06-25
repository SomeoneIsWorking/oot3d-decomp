// OoT3D decomp @ 00306f04  name=FUN_00306f04  size=88

undefined4 * FUN_00306f04(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*DAT_00306f5c & 1) == 0) &&
     (iVar3 = FUN_003679b4(DAT_00306f5c), uVar2 = DAT_00306f64, puVar1 = DAT_00306f60, iVar3 != 0))
  {
    *DAT_00306f60 = 0;
    puVar1[0x10] = uVar2;
    puVar1[0x11] = uVar2;
    *(undefined *)(puVar1 + 0x12) = 0;
    *(undefined *)((int)puVar1 + 0x49) = 0;
    *(undefined *)((int)puVar1 + 0x4a) = 0;
  }
  return DAT_00306f60;
}

