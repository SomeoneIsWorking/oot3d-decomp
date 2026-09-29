// OoT3D decomp @ 0020e984  name=FUN_0020e984  size=404

void FUN_0020e984(int param_1,undefined4 param_2)

{
  undefined1 auStack_278 [4];
  undefined1 auStack_274 [576];
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_14;

  FUN_00350820(auStack_274,DAT_0020eb18,0x24,0x10);
  FUN_003510b0(param_1,DAT_0020eb1c);
  FUN_00372f38(param_1,param_2,param_1 + 0x250,2,0);
  FUN_00350eb8(param_2,param_1 + 0x1e0);
  FUN_00350d48(param_2,param_1 + 0x1e0,param_1,DAT_0020eb20,param_1 + 0x200);
  *(undefined4 *)(*(int *)(param_1 + 0x1fc) + 0x44) =
       *(undefined4 *)(*(int *)(param_1 + 0x1fc) + 0x34);
  local_34 = *DAT_0020eb24;
  local_30 = DAT_0020eb24[4];
  local_2c = DAT_0020eb24[8];
  local_28 = DAT_0020eb24[0xc];
  local_33 = DAT_0020eb24[1];
  local_2f = DAT_0020eb24[5];
  local_2b = DAT_0020eb24[9];
  local_27 = DAT_0020eb24[0xd];
  local_32 = DAT_0020eb24[2];
  local_2e = DAT_0020eb24[6];
  local_2a = DAT_0020eb24[10];
  local_26 = DAT_0020eb24[0xe];
  local_31 = DAT_0020eb24[3];
  local_2d = DAT_0020eb24[7];
  local_29 = DAT_0020eb24[0xb];
  local_25 = DAT_0020eb24[0xf];
  local_20 = 0;
  local_1c = 0;
  local_24 = 0x10;
  local_14 = 0xe;
  FUN_00350660(param_2,param_1 + 0x1d8,1,0,0,auStack_278);
  FUN_00350660(param_2,param_1 + 0x1dc,1,0,0,auStack_278);
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(undefined2 *)(param_1 + 0x1a8) = 0xb4;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_0020eb28;
  *(undefined1 *)(param_1 + 0x1aa) = 0;
  return;
}
