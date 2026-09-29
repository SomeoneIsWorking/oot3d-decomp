// OoT3D decomp @ 001dc8b0  name=FUN_001dc8b0  size=484

void FUN_001dc8b0(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_24 [4];
  float local_20;
  undefined1 auStack_1c [4];

  FUN_00372f38(param_1,param_2,param_1 + 0x8a8,1,0);
  FUN_003510b0(param_1,DAT_001dca94);
  iVar2 = param_1 + 0x8c4;
  *(ushort *)(param_1 + 0x8b2) = *(ushort *)(param_1 + 0x1c) >> 8;
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(ushort *)(param_1 + 0x1c) = uVar1 & 0xff;
  if ((uVar1 & 0xff) == 0) {
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x568,0x10);
    FUN_00353dd0(param_2,iVar2);
    FUN_00353d24(param_2,iVar2,param_1,DAT_001dca98);
    FUN_00350d20(param_1 + 0xa0,DAT_001dca9c + 0x80);
    if (*(short *)(param_1 + 0x8b2) == 0xff || *(short *)(param_1 + 0x8b2) == 0) {
      *(undefined2 *)(param_1 + 0x8b2) = 1;
    }
    uVar3 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_24,param_1,param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x84) = uVar3;
    iVar2 = FUN_0035e8a0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),param_2,
                         param_2 + 0xa98,&local_20,auStack_1c);
    if ((iVar2 == 0) || (local_20 <= *(float *)(param_1 + 0x84))) {
      FUN_00374428(param_1);
    }
    else {
      *(float *)(param_1 + 0xc) = local_20;
    }
    *(undefined4 *)(param_1 + 0x140) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    uVar3 = DAT_001dcaa0;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    FUN_00372d4c(DAT_001dcaac,DAT_001dcaa4,param_1 + 0xbc,DAT_001dcaa8);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe | 0x10;
    FUN_00353dd0(param_2,iVar2);
    FUN_00353d24(param_2,iVar2,param_1,DAT_001dcab0);
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,6);
    *(undefined4 *)(param_1 + 0x6c) = DAT_001dcab4;
    *(undefined2 *)(param_1 + 0x8b0) = 0x2d;
    uVar3 = DAT_001dcab8;
    *(undefined2 *)(param_1 + 0xbe) = 0;
  }
  *(undefined4 *)(param_1 + 0x8ac) = uVar3;
  return;
}
