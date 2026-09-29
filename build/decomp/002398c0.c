// OoT3D decomp @ 002398c0  name=FUN_002398c0  size=104

void FUN_002398c0(int param_1,undefined4 param_2)

{
  FUN_003731e0(param_1 + 0x1a4);
  if (*(short *)(param_1 + 0xc90) == 0) {
    FUN_0036963c(param_2,(int)*(short *)(param_1 + 0xc9c));
    FUN_00320d7c(param_2,0,7);
    *(short *)(DAT_0023992c + param_1) = (short)DAT_00239928;
    FUN_0036be34(param_2);
    *(undefined2 *)(param_1 + 0xc8e) = 5;
    *(undefined4 *)(param_1 + 0xc7c) = DAT_00239930;
  }
  return;
}
