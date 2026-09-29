// OoT3D decomp @ 00448f0c  name=FUN_00448f0c  size=144

undefined4 FUN_00448f0c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_218 [524];

  cVar1 = *(char *)(DAT_00448fa4 + (*DAT_00448f9c + *(int *)(DAT_00448fa0 + 0x4e8)) * 4);
  iVar3 = DAT_00448fa8 + cVar1 * 0x8c;
  *(int *)(DAT_00448fac + param_1) = iVar3;
  *(short *)(param_1 + 0x104) = (short)cVar1;
  *(undefined1 *)(param_1 + 0x106) = *(undefined1 *)(iVar3 + 0x89);
  FUN_00324f44(auStack_218,iVar3,0x106);
  uVar2 = FUN_00301300(auStack_218,0,(int)cVar1 | 0x80000000);
  *(undefined4 *)(DAT_00448fb0 + param_1) = uVar2;
  return 3;
}
