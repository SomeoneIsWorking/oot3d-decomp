// OoT3D decomp @ 00211b5c  name=FUN_00211b5c  size=192

void FUN_00211b5c(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  undefined1 auStack_3c [48];

  FUN_00372224(auStack_3c,param_1 + 0x148);
  sVar1 = FUN_0036e70c(*(undefined4 *)(param_2 + *(short *)(DAT_00211c1c + param_2) * 4 + 0xa54));
  fVar3 = (float)VectorSignedToFloat((int)(short)((sVar1 - *(short *)(param_1 + 0xbe)) + -0x8000),
                                     (byte)(in_fpscr >> 0x15) & 3);
  FUN_003735e8(fVar3 * DAT_00211c20,auStack_3c,1);
  if ((*(ushort *)(param_1 + 0x1c) & 1) != 0) {
    FUN_003735e8(DAT_00211c24,auStack_3c,1);
  }
  iVar2 = FUN_003695f8();
  uVar4 = DAT_00211c28;
  if (iVar2 == 0) {
    uVar4 = DAT_00211c2c;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0xc) = uVar4;
  FUN_003721e0(*(undefined4 *)(param_1 + 0x1a4),auStack_3c);
  *(undefined1 *)(*(int *)(param_1 + 0x1a4) + 0xac) = 1;
  FUN_00372170(*(undefined4 *)(param_1 + 0x1a4),0);
  return;
}
