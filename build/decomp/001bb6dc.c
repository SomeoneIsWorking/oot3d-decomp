// OoT3D decomp @ 001bb6dc  name=FUN_001bb6dc  size=784

void FUN_001bb6dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_284 [4];
  undefined1 auStack_280 [576];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_20;

  FUN_00350820(auStack_280,DAT_001bb9ec,0x24,0x10);
  FUN_003510b0(param_1,DAT_001bb9f0);
  uVar3 = FUN_00372f38(param_1,param_2,param_1 + 0x1dc0,0,0);
  uVar4 = ObjectBankArchive_00358ef8(uVar3,0);
  FUN_003413ec(param_1 + 0x1e0,uVar3,param_2,uVar4,*(undefined4 *)(param_1 + 0x178),0x12,1,
               param_1 + 0x2e8,param_1 + 0x7fc,0x19);
  *(undefined1 *)(param_1 + 0x255) = 0;
  uVar3 = FUN_00372f38(param_1,param_2,param_1 + 0x1dc4,0,0);
  FUN_00341268(param_1 + 0x264,uVar3,param_2,uVar4,0x12,1,param_1 + 0x1224,param_1 + 0x1738,0x19);
  uVar1 = DAT_001bb9fc;
  uVar4 = DAT_001bb9f8;
  uVar3 = DAT_001bb9f4;
  *(undefined1 *)(param_1 + 0x2d9) = 0;
  FUN_00372d4c(uVar1,uVar3,param_1 + 0xbc,uVar4);
  *(undefined2 *)(param_1 + 0xb0) = 0x28;
  *(undefined2 *)(param_1 + 0xb2) = 100;
  fVar2 = DAT_001bba00;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  uVar3 = DAT_001bba04;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar2;
  *(undefined4 *)(param_1 + 0xa0) = uVar3;
  *(undefined2 *)(DAT_001bba08 + param_1) = 0;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x1c90,param_1,DAT_001bba0c);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x1d68,param_1,DAT_001bba10);
  FUN_00350a98(param_2);
  FUN_00350914(param_2,param_1 + 0x1ce8,param_1,DAT_001bba14);
  *(undefined1 *)(param_1 + 0xb6) = 0xfe;
  *(undefined1 *)(param_1 + 0xb7) = 10;
  local_3d = 0xff;
  local_32 = 0xff;
  local_36 = 0xff;
  local_3e = 0xff;
  local_33 = 0xff;
  local_37 = 0xff;
  local_3a = 0xff;
  local_3f = 0xff;
  local_34 = 0xff;
  local_38 = 0xff;
  local_3b = 0xff;
  local_40 = 0xff;
  local_3c = 0xff;
  local_39 = 0x40;
  local_30 = 4;
  local_28 = 2;
  local_31 = 0;
  local_20 = 0x15;
  local_35 = 0;
  local_2c = 0;
  FUN_00350660(param_2,param_1 + 0x1c8c,1,0,0,auStack_284);
  if (*(short *)(param_1 + 0x1c) == 3) {
    FUN_0036e734(param_1 + 0x1e0,0x12);
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + DAT_001bba20;
    *(undefined1 *)(param_1 + 0x1c4c) = 0;
    FUN_0037572c(uVar1,param_1);
    uVar3 = DAT_001bba24;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    FUN_0036e734(param_1 + 0x1e0,0x12);
    *(undefined4 *)(param_1 + 0x58) = uVar1;
    *(undefined1 *)(param_1 + 0x1c4c) = 0;
    *(undefined4 *)(param_1 + 0x1c6c) = 0x17;
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) - DAT_001bba18;
    uVar3 = DAT_001bba1c;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  *(undefined4 *)(param_1 + 0x1c50) = uVar3;
  if (*(short *)(param_1 + 0x1c) == 0) {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
  }
  return;
}
