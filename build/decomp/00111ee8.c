// OoT3D decomp @ 00111ee8  name=FUN_00111ee8  size=112

void FUN_00111ee8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined2 uVar2;

  iVar1 = FUN_0036bc98();
  if (iVar1 == 0) {
    if (*(short *)(DAT_00111f5c + 0xe8) < 0x32) {
      uVar2 = 0x20;
    }
    else {
      uVar2 = 0x1f;
    }
    *(undefined2 *)(param_1 + 0x116) = uVar2;
    if (*(int *)(param_1 + 0x98) < DAT_00111f60) {
      FUN_0036bb28(DAT_00111f64,param_1,param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29c) = DAT_00111f58;
  }
  FUN_00369a68(param_1,param_2);
  return;
}
