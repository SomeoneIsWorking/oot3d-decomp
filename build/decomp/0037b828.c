// OoT3D decomp @ 0037b828  name=FUN_0037b828  size=448

void FUN_0037b828(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;

  FUN_003510b0(param_1,DAT_0037b9e8);
  uVar4 = FUN_00372f38(param_1,param_2,param_1 + 0x1ac,0,param_1 + 0x1b0,1,0);
  uVar4 = FUN_00372f0c(uVar4,0);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1ac) + 0xc),uVar4);
  uVar4 = DAT_0037b9ec;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1ac) + 0xc) + 0x10) = 1;
  FUN_0037572c(param_1);
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x1a8) = 0xff;
  uVar2 = DAT_0037ba00;
  iVar5 = (int)*(short *)(param_1 + 0x1c);
  if (((iVar5 == 1 || iVar5 == 2) || iVar5 == 3) || iVar5 == 4) {
    fVar6 = (float)VectorSignedToFloat((int)*(short *)(DAT_0037b9f0 + iVar5 * 2),
                                       (byte)(in_fpscr >> 0x15) & 3);
    FUN_0037572c(fVar6 * DAT_0037b9f4,param_1);
    *(undefined4 *)(param_1 + 0x140) = DAT_0037b9f8;
    *(undefined4 *)(param_1 + 0x13c) = DAT_0037b9fc;
    return;
  }
  sVar1 = *(short *)(param_2 + 0x104);
  if (sVar1 == 0x51) {
LAB_0037b940:
    *(undefined4 *)(param_1 + 0xfc) = DAT_0037ba04;
    *(undefined4 *)(param_1 + 0x100) = uVar2;
  }
  else if (0x51 < sVar1) {
    if (sVar1 == 0x52) {
      FUN_0037572c(DAT_0037ba08,param_1);
      goto LAB_0037b990;
    }
    if (sVar1 == 99) {
      FUN_0037572c(DAT_0037ba0c,param_1);
      *(undefined4 *)(param_1 + 0xfc) = uVar2;
      *(undefined4 *)(param_1 + 0x100) = uVar2;
      goto LAB_0037b990;
    }
    if (sVar1 == 0x6b) goto LAB_0037b940;
  }
  FUN_0037572c(uVar4,param_1);
LAB_0037b990:
  if ((*(int *)(DAT_0037ba10 + 4) == 0) && ((*(ushort *)(DAT_0037ba14 + 0xf0) & 0x8000) == 0)) {
    if (*(char *)(param_2 + 0x107) != '\0') {
      *(ushort *)(param_1 + 0x1a4) = *(ushort *)(param_1 + 0x1a4) & 0xfffe;
      return;
    }
    uVar3 = *(ushort *)(param_1 + 0x1a4) | 1;
  }
  else {
    uVar3 = *(ushort *)(param_1 + 0x1a4) & 0xfffe;
  }
  *(ushort *)(param_1 + 0x1a4) = uVar3;
  return;
}
