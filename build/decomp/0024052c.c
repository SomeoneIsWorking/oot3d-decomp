// OoT3D decomp @ 0024052c  name=FUN_0024052c  size=716

void FUN_0024052c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  undefined4 uVar6;

  uVar6 = 0;
  FUN_003510b0(param_1,DAT_002407f8);
  *(undefined4 *)(param_1 + 0x314) = 0;
  *(uint *)(param_1 + 0x318) = *(ushort *)(param_1 + 0x1c) & 0xff00;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_00372f38(param_1,param_2,param_1 + 0x300,0xe,param_1 + 0x304,0x12,param_1 + 0x308,0xf,
               param_1 + 0x30c,0x10,param_1 + 0x310,0xd,0,uVar6);
  *(undefined1 *)(param_1 + 0x19b) = 3;
  if (*(short *)(param_1 + 0x1c) == 4) {
    *(undefined1 *)(param_1 + 0x1c0) = 0x3c;
    uVar6 = DAT_00240840;
    *(undefined4 *)(param_1 + 0x100) = DAT_0024083c;
    *(undefined4 *)(param_1 + 0x1bc) = uVar6;
  }
  else {
    FUN_00353dd0(param_2,param_1 + 0x1d0);
    FUN_00353d24(param_2,param_1 + 0x1d0,param_1,DAT_002407fc);
    uVar4 = DAT_00240804;
    uVar6 = DAT_00240800;
    if (*(short *)(param_1 + 0x1c) == 0 || *(short *)(param_1 + 0x1c) == 5) {
      *(undefined1 *)(param_1 + 0x1c0) = 0x1e;
      *(undefined4 *)(param_1 + 0x218) = uVar6;
      *(undefined4 *)(param_1 + 100) = uVar4;
      uVar6 = DAT_00240808;
      if (*(short *)(param_1 + 0x1c) == 5) {
        *(undefined2 *)(param_1 + 0x1c) = 0;
        *(undefined2 *)(param_1 + 0x1c2) = 1;
      }
      *(undefined4 *)(param_1 + 0x1bc) = uVar6;
    }
    else {
      FUN_003532e8(param_1,1);
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
      fVar3 = DAT_00240828;
      if (*(short *)(param_1 + 0x1c) == 1) {
        uVar4 = FUN_00353fd4(param_1,param_2,0xc);
        *(undefined1 *)(param_1 + 0x1c0) = 0x2d;
        uVar2 = DAT_00240814;
        uVar1 = DAT_00240810;
        if (*(int *)(param_2 + 0x7f74) == 0) {
          *(undefined4 *)(param_2 + 0x7f74) = 1;
          *(undefined4 *)(param_1 + 100) = uVar1;
          *(undefined4 *)(param_1 + 0x1bc) = uVar2;
        }
        else {
          *(undefined4 *)(param_1 + 0x1bc) = DAT_0024080c;
          *(undefined4 *)(param_2 + 0x7f74) = 0;
        }
        fVar3 = DAT_0024081c;
        fVar5 = *(float *)(param_1 + 0xc) - DAT_00240818;
        *(float *)(param_1 + 0x84) = fVar5;
        uVar1 = DAT_00240824;
        *(short *)(param_1 + 0x1c2) = (short)(int)((fVar5 + fVar3) - DAT_00240820);
        *(undefined4 *)(param_1 + 0x210) = uVar6;
        *(undefined4 *)(param_1 + 0x214) = uVar1;
      }
      else {
        if (*(short *)(param_1 + 0x1c) == 2) {
          uVar4 = FUN_00353fd4(param_1,param_2,9);
          *(float *)(param_1 + 8) = *(float *)(param_1 + 8) - fVar3;
        }
        else {
          *(float *)(param_1 + 8) = *(float *)(param_1 + 8) + DAT_00240828;
          uVar4 = FUN_00353fd4(param_1,param_2,10);
        }
        *(undefined1 *)(param_1 + 0x19b) = 2;
        FUN_0034f910(param_2,param_1 + 0x228);
        FUN_0034f760(param_2,param_1 + 0x228,param_1,DAT_0024082c,param_1 + 0x248);
        *(undefined4 *)(param_1 + 0x210) = DAT_00240830;
        *(undefined4 *)(param_1 + 0x214) = DAT_00240834;
        *(byte *)(param_1 + 0x1fd) = *(byte *)(param_1 + 0x1fd) | 0x10;
        *(undefined4 *)(param_1 + 0x1bc) = DAT_00240838;
      }
      uVar6 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar4);
      *(undefined4 *)(param_1 + 0x1a4) = uVar6;
    }
  }
  FUN_00350d20(param_1 + 0xa0,0,DAT_00240844);
  return;
}
