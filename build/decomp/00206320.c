// OoT3D decomp @ 00206320  name=FUN_00206320  size=136

void FUN_00206320(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;
  
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_002063b0,DAT_002063ac,uVar2,DAT_002063a8,param_1 + 0x1a4,0);
  uVar1 = DAT_002063b8;
  uVar2 = DAT_002063b4;
  *(undefined4 *)(param_1 + 0x608) = DAT_002063b4;
  *(undefined4 *)(param_1 + 0x5fc) = uVar1;
  *(undefined4 *)(param_1 + 0x638) = uVar1;
  *(undefined4 *)(param_1 + 0x634) = DAT_002063bc;
  *(undefined4 *)(param_1 + 0x5e8) = uVar2;
  *(undefined4 *)(param_1 + 0x630) = uVar2;
  *(undefined4 *)(param_1 + 0x604) = uVar1;
  *(undefined4 *)(param_1 + 0x62c) = uVar1;
  *(undefined4 *)(param_1 + 0x5ec) = uVar2;
  *(undefined4 *)(param_1 + 0x624) = uVar2;
  *(undefined4 *)(param_1 + 0x628) = uVar2;
  *(undefined4 *)(param_1 + 0x5d0) = DAT_002063c0;
  return;
}

