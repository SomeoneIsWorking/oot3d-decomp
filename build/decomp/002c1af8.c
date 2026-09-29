// OoT3D decomp @ 002c1af8  name=FUN_002c1af8  size=156

undefined4 * FUN_002c1af8(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;

  if (((*DAT_002c1b94 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_002c1b94), puVar3 = DAT_002c1ba0, uVar2 = DAT_002c1b9c,
     uVar1 = DAT_002c1b98, iVar4 != 0)) {
    *DAT_002c1ba0 = DAT_002c1b98;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    puVar3[4] = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
  }
  return DAT_002c1ba0;
}
