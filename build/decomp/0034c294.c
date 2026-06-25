// OoT3D decomp @ 0034c294  name=FUN_0034c294  size=80

void FUN_0034c294(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(ushort *)(param_1 + 0x2dcc) != param_2) {
    *(short *)(param_1 + 0x2dcc) = (short)param_2;
    uVar1 = DAT_0034c2e4;
    *(undefined2 *)(param_1 + 0x2dc8) = 1;
    *(undefined4 *)(param_1 + 0x2dd0) = uVar1;
    if (*(short *)(param_1 + 0x309c) != 0) {
      *(undefined2 *)(param_1 + 0x2dc8) = 3;
    }
  }
  return;
}

