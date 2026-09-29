// OoT3D decomp @ 0029a9d0  name=FUN_0029a9d0  size=512

void FUN_0029a9d0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;

  uVar4 = 0;
  FUN_003510b0(param_1,DAT_0029abd0);
  *(char *)(param_1 + 0x1c0) = (char)((ushort)*(undefined2 *)(param_1 + 0x1c) >> 8);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0x11,param_1 + 0x1c8,0x13,param_1 + 0x1cc,0x15,
               param_1 + 0x1d0,0,0,uVar4);
  if (*(short *)(param_1 + 0x1c) == 2) {
    FUN_003532e8(param_1,3);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
    uVar2 = FUN_00353fd4(param_1,param_2,0xf);
    uVar4 = DAT_0029abd8;
    *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + DAT_0029abd4;
    *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  }
  else {
    FUN_003532e8(param_1,1);
    if (*(short *)(param_1 + 0x1c) == 0) {
      uVar2 = FUN_00353fd4(param_1,param_2,0xb);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
      uVar4 = DAT_0029abdc;
      *(undefined2 *)(param_1 + 0x1c2) = 0x1e;
      *(undefined4 *)(param_1 + 0x1bc) = uVar4;
    }
    else if (*(short *)(param_1 + 0x1c) == 3) {
      uVar2 = FUN_00353fd4(param_1,param_2,0);
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + DAT_0029abe0;
      iVar3 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c0));
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_0029abe8;
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      }
      else {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_0029abe4;
        *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
      }
    }
    else {
      uVar2 = FUN_00353fd4(param_1,param_2,0xd);
      uVar1 = DAT_0029abf0;
      uVar4 = DAT_0029abec;
      *(undefined2 *)(param_1 + 0x1c2) = 0x78;
      *(undefined4 *)(param_1 + 0x100) = uVar4;
      *(undefined4 *)(param_1 + 0x104) = uVar4;
      *(undefined4 *)(param_1 + 0x1bc) = uVar1;
    }
  }
  uVar4 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar4;
  return;
}
