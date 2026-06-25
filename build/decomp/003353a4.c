// OoT3D decomp @ 003353a4  name=FUN_003353a4  size=56

void FUN_003353a4(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
                 undefined2 param_6)

{
  if ((param_2 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x16c) = param_3;
  }
  if ((param_2 & 2) != 0) {
    *(undefined4 *)(param_1 + 0x170) = param_4;
  }
  if ((param_2 & 4) != 0) {
    *(undefined2 *)(param_1 + 0x174) = param_5;
  }
  if ((param_2 & 8) != 0) {
    *(undefined2 *)(param_1 + 0x176) = param_6;
  }
  return;
}

