// OoT3D decomp @ 001b5460  name=FUN_001b5460  size=520

void FUN_001b5460(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined1 auStack_30 [4];
  undefined4 local_2c;
  float local_28;
  undefined4 local_24;
  undefined1 auStack_20 [4];

  uVar1 = 5;
  uVar3 = *(ushort *)(param_1 + 0x1c) & 3;
  if (uVar3 == 1 || uVar3 == 2) {
    uVar1 = 4;
  }
  FUN_00372f38(param_1,param_2,param_1 + 0x200,uVar1,0);
  FUN_003510b0(param_1,DAT_001b5668 + uVar3 * 0x14);
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 != 0) {
    *(float *)(param_1 + 0xfc) = *(float *)(param_1 + 0xfc) + DAT_001b566c;
  }
  if (*(short *)(param_1 + 0xbe) == 0) {
    fVar4 = (float)FUN_00371e50(DAT_001b5670);
    *(short *)(param_1 + 0x36) = (short)(int)fVar4;
    *(short *)(param_1 + 0xbe) = (short)(int)fVar4;
  }
  FUN_0037572c(*(undefined4 *)(DAT_001b5674 + uVar3 * 4),param_1);
  FUN_00353dd0(param_2,param_1 + 0x1a8);
  FUN_00353d24(param_2,param_1 + 0x1a8,param_1,
               DAT_001b5678 + (*(ushort *)(param_1 + 0x1c) & 3) * 0x38);
  FUN_0037632c(param_1,param_1 + 0x1a8);
  if (uVar3 == 1) {
    iVar2 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c) >> 10 & 0x3cU |
                                 (uint)((int)*(short *)(param_1 + 0x1c) << 0x18) >> 0x1e);
    if (iVar2 != 0) goto LAB_001b5654;
  }
  else if ((uVar3 == 2) && ((*(ushort *)(DAT_001b567c + 0xf8) & 0x80) != 0)) goto LAB_001b5654;
  FUN_00350d20(param_1 + 0xa0,0,DAT_001b5680);
  *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(DAT_001b5684 + uVar3 * 4);
  fVar4 = DAT_001b5688;
  if (-1 < (int)((uint)*(ushort *)(param_1 + 0x1c) << 0x1a)) {
    local_2c = *(undefined4 *)(param_1 + 0x28);
    local_28 = *(float *)(param_1 + 0x2c) + DAT_001b568c;
    local_24 = *(undefined4 *)(param_1 + 0x30);
    fVar5 = (float)FUN_0036e81c(param_2 + 0xa98,auStack_20,auStack_30,param_1,&local_2c);
    if ((uint)DAT_001b5690 <= (uint)fVar5) {
LAB_001b5654:
      FUN_00374428(param_1);
      return;
    }
    *(float *)(param_1 + 0x2c) = fVar5 + fVar4;
    FUN_0036df4c(param_1 + 8,param_1 + 0x28);
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001b5694;
  return;
}
