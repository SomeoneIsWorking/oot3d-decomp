// OoT3D decomp @ 00180138  name=FUN_00180138  size=676

void FUN_00180138(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;

  iVar4 = *(int *)(param_1 + 0x128);
  FUN_003731e0(param_1 + 0x1a4);
  uVar2 = DAT_001803e0;
  uVar6 = DAT_001803dc;
  uVar3 = *(undefined4 *)(iVar4 + 0x2c);
  uVar5 = *(undefined4 *)(iVar4 + 0x30);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  uVar1 = *(undefined2 *)(iVar4 + 0x36);
  *(undefined2 *)(param_1 + 0x36) = uVar1;
  *(undefined2 *)(param_1 + 0xbe) = uVar1;
  uVar3 = DAT_001803e4;
  if (*(short *)(param_1 + 0x266) != 0) {
    if (*(short *)(param_1 + 0x266) < 0x26) {
      local_44 = uVar6;
      local_40 = uVar6;
      local_3c = uVar6;
      local_50 = uVar6;
      local_4c = uVar6;
      local_48 = uVar6;
      local_38 = (float)FUN_003738a8(DAT_001803e4);
      local_38 = local_38 + *(float *)(param_1 + 0x340);
      local_34 = (float)FUN_00371e50(uVar2);
      local_34 = local_34 + *(float *)(param_1 + 0x344);
      fVar7 = (float)FUN_003738a8(uVar3);
      local_30 = fVar7 + DAT_001803e8 + *(float *)(param_1 + 0x348);
      local_4c = DAT_001803ec;
      fVar7 = (float)FUN_00371e50(uVar3);
      FUN_0035aea0(param_2,&local_38,&local_44,&local_50,(int)(short)((short)(int)fVar7 + 5),0);
    }
    if (*(short *)(param_1 + 0x266) == 0x1e) {
      *(undefined2 *)(param_1 + 0x250) = 0;
    }
    else if (*(short *)(param_1 + 0x266) == 0x2d) {
      FUN_0037547c(DAT_001803f8,0,4,DAT_001803f4,DAT_001803f4,DAT_001803f0);
    }
  }
  if (*(char *)(iVar4 + 0x1a4) == '\x03') {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,4);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001803fc,uVar6,uVar3,uVar6,param_1 + 0x1a4,4,3);
    *(undefined2 *)(param_1 + 0x266) = 0x3c;
  }
  if (*(char *)(iVar4 + 0x1a4) == '\x02') {
    FUN_00374a58(DAT_00180400,param_1 + 0x1a4,8);
  }
  if (*(char *)(iVar4 + 0x1a4) == '\x05') {
    FUN_00370350(DAT_00180404,param_1 + 0x1a4,6);
    *(undefined4 *)(param_1 + 0x1e4) = DAT_00180408;
  }
  if (*(char *)(iVar4 + 0x1a4) == '\n') {
    FUN_00374a58(DAT_0018040c,param_1 + 0x1a4,10);
    uVar6 = *(undefined4 *)(param_1 + 0x128);
    local_50 = 0;
    local_4c = 0x26;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2b4),
                 *(undefined4 *)(param_1 + 0x2b8),param_2 + 0x208c,param_1,param_2,0x6d,0x32,0);
    *(undefined4 *)(param_1 + 0x128) = uVar6;
  }
  if (*(char *)(iVar4 + 0x1a4) == '\v') {
    FUN_00374a58(uVar2,param_1 + 0x1a4,0xb);
  }
  if (*(short *)(param_1 + 0x252) == 1) {
    *(undefined4 *)(param_1 + 0x27c) = DAT_00180410;
  }
  else if (*(short *)(param_1 + 0x252) == 2) {
    *(float *)(param_1 + 0x288) = *(float *)(param_1 + 0x288) + DAT_00180414;
  }
  if (*(char *)(iVar4 + 0x1a4) == -1) {
    FUN_00370350(uVar2,param_1 + 0x1a4,9);
    *(undefined4 *)(param_1 + 0x238) = DAT_00180418;
  }
  *(undefined1 *)(iVar4 + 0x1a4) = 0;
  return;
}
