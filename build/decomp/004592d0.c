// OoT3D decomp @ 004592d0  name=FUN_004592d0  size=336

undefined4 FUN_004592d0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  local_28 = *(undefined4 *)(param_1 + 0x30);
  local_24 = *(undefined4 *)(param_1 + 0x34);
  local_20 = *(undefined4 *)(param_1 + 0x38);
  local_34 = *(undefined4 *)(param_1 + 0x48);
  local_30 = *(undefined4 *)(param_1 + 0x4c);
  local_2c = *(undefined4 *)(param_1 + 0x50);
  local_40 = *(undefined4 *)(param_1 + 0x3c);
  local_3c = *(undefined4 *)(param_1 + 0x40);
  local_38 = *(undefined4 *)(param_1 + 0x44);
  FUN_002d9e68(param_1 + 0x114,&local_28,&local_34,&local_40);
  uVar1 = DAT_00459420;
  local_40 = DAT_00459420;
  local_3c = DAT_00459420;
  local_38 = DAT_00459420;
  local_34 = DAT_00459420;
  local_30 = DAT_00459424;
  local_2c = DAT_00459420;
  local_28 = DAT_00459420;
  local_24 = DAT_00459420;
  local_20 = DAT_00459428;
  FUN_002d9e68(param_1 + 0x144,&local_40,&local_34,&local_28);
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)(param_1 + 0x178) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(param_1 + 0x17c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x184) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x18c) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(param_1 + 0x1a0) = uVar1;
  *(undefined4 *)(param_1 + 400) = uVar1;
  *(undefined4 *)(param_1 + 0x180) = uVar1;
  FUN_0034a80c(param_1 + 0x174,param_1 + 0x174);
  if (((*DAT_0045942c & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0045942c), iVar2 != 0)) {
    FUN_0036788c(DAT_00459430);
  }
  *(int *)(DAT_00459430 + 0xfc) = param_1;
  return 1;
}

