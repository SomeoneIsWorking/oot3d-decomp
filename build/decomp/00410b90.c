// OoT3D decomp @ 00410b90  name=FUN_00410b90  size=196

undefined4 FUN_00410b90(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;

  puVar3 = DAT_00410c54;
  if ((code *)*DAT_00410c54 == (code *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(code *)*DAT_00410c54)(0x10000,0x100,0,0x10);
  }
  piVar1 = DAT_00410c58;
  *DAT_00410c58 = iVar2;
  if (iVar2 != 0) {
    if ((code *)*puVar3 == (code *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = (undefined4 *)(*(code *)*puVar3)(0x10000,0x100,0,0x28);
    }
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      puVar3[6] = 0;
      puVar3[7] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      *puVar3 = 0;
      puVar3[4] = 0;
      puVar3[8] = 0;
      puVar3[9] = 0;
      puVar4 = (undefined4 *)*piVar1;
      *puVar4 = puVar3;
      puVar4[1] = 0;
      puVar4[2] = puVar3;
      puVar4[3] = 0;
      return 0;
    }
  }
  return 0xffffffff;
}
