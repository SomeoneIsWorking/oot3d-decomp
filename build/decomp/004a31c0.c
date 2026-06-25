// OoT3D decomp @ 004a31c0  name=FUN_004a31c0  size=360

void FUN_004a31c0(int param_1,int param_2,int param_3)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_00371738(param_1 + 0x28,param_1 + 8,0x12);
  fVar1 = DAT_004a3328;
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0xc0) = *(undefined2 *)(param_1 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x2c) + fVar1;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x34);
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0x36);
  *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x38);
  FUN_0036df4c(param_1 + 0x108,param_1 + 0x28);
  uVar2 = DAT_004a332c;
  *(undefined4 *)(param_1 + 0x5c) = DAT_004a332c;
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar2 = DAT_004a3330;
  *(undefined *)(param_1 + 0x1f) = 3;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x94) = DAT_004a3334;
  *(undefined4 *)(param_1 + 0xfc) = DAT_004a3338;
  *(undefined4 *)(param_1 + 0x100) = DAT_004a333c;
  *(undefined4 *)(param_1 + 0x104) = DAT_004a3340;
  *(undefined *)(param_1 + 0x123) = 0xff;
  *(undefined *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined *)(param_1 + 0x198) = 2;
  *(undefined2 *)(param_1 + 0x19c) = 0;
  FUN_004ba25c(param_1 + 0xa0);
  *(undefined *)(param_1 + 0x81) = 0x32;
  *(float *)(param_1 + 0xc4) = fVar1;
  *(undefined4 *)(param_1 + 200) = 0;
  *(float *)(param_1 + 0xcc) = fVar1;
  *(undefined *)(param_1 + 0xd0) = 0xff;
  if ((param_3 != 0) &&
     (iVar3 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x1e)), iVar3 != 0)) {
    (**(code **)(param_1 + 0x134))(param_1,param_2);
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  return;
}

