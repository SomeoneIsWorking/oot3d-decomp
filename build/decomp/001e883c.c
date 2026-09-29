// OoT3D decomp @ 001e883c  name=FUN_001e883c  size=172

void FUN_001e883c(int param_1,undefined4 param_2)

{
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x95c),param_1 + 0x8cc,param_1 + 0x8d8);
  if ((*(short *)(param_1 + 0x93e) == 0) ||
     (*(int *)(*(int *)(param_1 + 0x960) + 0x1c4) == 0 &&
      *(int *)(*(int *)(param_1 + 0x960) + 0x1c0) == 0)) {
    FUN_0036963c(param_2,(int)*(short *)(param_1 + 0x95c));
    FUN_00320d7c(param_2,0,7);
    FUN_003725e0(param_2);
    *(undefined1 *)(param_1 + 0x958) = 1;
    FUN_0036e980(param_2,0,7);
    *(undefined4 *)(param_1 + 0x8a8) = DAT_001e88e8;
  }
  return;
}
