// OoT3D decomp @ 00214678  name=FUN_00214678  size=412

void FUN_00214678(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  float fVar5;

  uVar4 = *(undefined4 *)(DAT_00214814 + param_2);
  *(undefined1 *)(param_1 + 3) = 0xff;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00214818 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  iVar2 = iVar2 + 0x10;
  uVar3 = ObjectBankArchive_00358ef8(iVar2,0x25);
  FUN_003357dc(param_1 + 0x1a4);
  *(int *)(param_1 + 0x1ac) = iVar2;
  FUN_00337200(param_1 + 0x1a4,param_2,uVar3,*(undefined4 *)(param_1 + 0x178),3,param_1 + 0x1ec,5);
  uVar3 = DAT_00214824;
  if (*(short *)(param_1 + 0x1c) == 0) {
    FUN_0030f9f4(DAT_0021481c,DAT_00214820,DAT_0021481c,DAT_00214824,param_1 + 0x1a4,3);
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00214838 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x2e0) = (short)(int)(DAT_0021483c / fVar5 + DAT_00214840);
    *(undefined4 *)(param_1 + 0x2e4) = DAT_00214844;
  }
  else if (*(short *)(param_1 + 0x1c) == 1) {
    FUN_0030f9f4(DAT_00214820,DAT_0021481c,DAT_00214820,DAT_00214828,param_1 + 0x1a4,3);
    uVar1 = DAT_00214830;
    *(undefined4 *)(param_1 + 0x2e4) = DAT_0021482c;
    FUN_0036f59c(uVar4,uVar1);
  }
  uVar4 = FUN_00372f0c(iVar2,0x12);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1b0) + 0xc),uVar4);
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0xc) = DAT_00214834;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1b0) + 0xc) + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x2dc) = uVar3;
  return;
}
