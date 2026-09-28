// OoT3D decomp @ 002743c0  name=FUN_002743c0  size=208

void FUN_002743c0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  func_0x00375c08(uRam00274498,uRam00274494,uVar2,uRam00274490,param_1 + 0x1a4,0);
  *(undefined2 *)(param_1 + 0x93e) = 300;
  uVar1 = func_0x00367d74(param_2);
  *(undefined2 *)(param_1 + 0x95c) = uVar1;
  FUN_00320d7c(param_2,0,1);
  FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x95c),7);
  *(undefined4 *)(param_1 + 0x8cc) = uRam0027449c;
  *(undefined4 *)(param_1 + 0x8d0) = uRam002744a0;
  *(undefined4 *)(param_1 + 0x8d4) = uRam002744a4;
  *(undefined4 *)(param_1 + 0x8d8) = uRam002744a8;
  *(undefined4 *)(param_1 + 0x8dc) = uRam002744ac;
  *(undefined4 *)(param_1 + 0x8e0) = uRam002744b0;
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x95c),param_1 + 0x8cc,param_1 + 0x8d8);
  *(undefined4 *)(param_1 + 0x8a8) = uRam002744b4;
  return;
}
