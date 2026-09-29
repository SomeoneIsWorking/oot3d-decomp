// OoT3D decomp @ 00289770  name=FUN_00289770  size=736

void FUN_00289770(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18;

  FUN_003510b0(param_1,DAT_00289a50);
  FUN_003532e8(param_1,1);
  *(byte *)(param_1 + 0x1c0) = (byte)(((uint)*(ushort *)(param_1 + 0x1c) << 0x12) >> 0x1a);
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined4 *)(param_1 + 0x230) = 0;
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x220,0xc,param_1 + 0x224,7,param_1 + 0x228,6,
                       param_1 + 0x22c,8,0);
  uVar2 = FUN_00372f0c(uVar2,4);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x228) + 0xc),uVar2);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x228) + 0xc) + 0x10) = 1;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 != 2) {
    if (sVar1 == 0) {
      local_18 = FUN_00353fd4(param_1,param_2,3);
      FUN_00353dd0(param_2,param_1 + 0x1c4);
      FUN_00353d24(param_2,param_1 + 0x1c4,param_1,DAT_00289a58);
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_00289a5c;
      iVar3 = FUN_0036cf6c(param_2,(int)*(char *)(param_1 + 3));
      if (iVar3 == 0) {
        if ((*(ushort *)(DAT_00289a64 + 0x38) & 0x40) == 0) {
          FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x1c0));
          uVar2 = DAT_00289a74;
          *(undefined2 *)(param_1 + 0x1c2) = 0;
          *(undefined4 *)(param_1 + 0x1bc) = uVar2;
        }
        else {
          iVar3 = FUN_0036aa20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
                               *(undefined4 *)(param_1 + 0x10),param_2 + 0x208c,param_1,param_2,0xc6
                               ,0,(int)(short)(*(short *)(param_1 + 0xbe) + -0x8000),0,3);
          if (iVar3 != 0) {
            *(float *)(*(int *)(param_1 + 0x128) + 0x30) =
                 *(float *)(*(int *)(param_1 + 0x128) + 0x10) + DAT_00289a68;
          }
          uVar2 = DAT_00289a70;
          *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_00289a6c;
          *(undefined2 *)(param_1 + 0x36) = 0;
          *(undefined4 *)(param_1 + 0x1bc) = uVar2;
        }
      }
      else {
        FUN_00375c10(param_2,*(undefined1 *)(param_1 + 0x1c0));
        *(undefined4 *)(param_1 + 0x1bc) = DAT_00289a60;
      }
    }
    else if (sVar1 == 1) {
      local_18 = FUN_00353fd4(param_1,param_2,0);
      uVar2 = DAT_00289a78;
      *(undefined2 *)(param_1 + 0x1c2) = 0x300;
      *(undefined1 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = uVar2;
    }
    else {
      local_18 = FUN_00353fd4(param_1,param_2,1);
      iVar3 = FUN_0036e864(param_2,*(undefined1 *)(param_1 + 0x1c0));
      uVar2 = DAT_00289a84;
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0x1bc) = DAT_00289a7c;
      }
      else {
        *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - DAT_00289a80;
        *(undefined4 *)(param_1 + 0x1bc) = uVar2;
      }
    }
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,local_18);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x30;
  uVar2 = DAT_00289a54;
  *(short *)(*(int *)(*(int *)(param_2 + 0xa98) + 0x28) + 0x72) =
       (short)(int)*(float *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}
