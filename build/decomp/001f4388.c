// OoT3D decomp @ 001f4388  name=FUN_001f4388  size=128

void FUN_001f4388(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  iVar2 = FUN_003695f8();
  iVar1 = DAT_001f4410;
  local_14 = DAT_001f4408;
  uVar3 = DAT_001f4408;
  if (iVar2 == 0) {
    uVar3 = DAT_001f440c;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc) = uVar3;
  local_10 = VectorSignedToFloat((int)*(short *)(iVar1 + param_1),(byte)(in_fpscr >> 0x15) & 3);
  local_c = local_14;
  FUN_00372070(param_1 + 0x148,param_1 + 0x148,&local_14);
  local_14 = 0;
  FUN_0035e240(param_1 + 0x1bc,param_1 + 0x148,0,DAT_001f4414,param_1);
  return;
}
