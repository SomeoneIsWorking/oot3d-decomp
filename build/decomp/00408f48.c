// OoT3D decomp @ 00408f48  name=FUN_00408f48  size=236

void FUN_00408f48(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  local_44 = 0xffffffff;
  local_40 = (int)*(short *)(param_3 + 0xe) | (uint)*(ushort *)(param_3 + 0xc) << 0x10;
  iVar3 = FUN_00308200(0);
  uVar2 = DAT_00409038;
  uVar1 = DAT_00409034;
  iVar4 = FUN_0030807c(DAT_00409038,DAT_00409034);
  if (iVar4 == 0xc) {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
  }
  local_3c = iVar4 << 4 | iVar3 << 0x1c | DAT_0040903c;
  local_38 = 0;
  local_34 = thunk_FUN_002c83fc(*(undefined4 *)(param_3 + 8));
  local_34 = local_34 >> 3;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = FUN_0030807c(uVar2,uVar1);
  FUN_00307bd8(*param_1,0x81,10,1,0xf,&local_44);
  FUN_00307bd8(*param_1,0x8e,1,0,0xf,&local_1c);
  return;
}
