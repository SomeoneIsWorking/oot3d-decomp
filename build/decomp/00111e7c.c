// OoT3D decomp @ 00111e7c  name=FUN_00111e7c  size=96

void FUN_00111e7c(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_0036bc98();
  if (iVar1 == 0) {
    *(undefined2 *)(param_1 + 0x116) = 0x23;
    if (*(int *)(param_1 + 0x98) < DAT_00111ee0) {
      FUN_0036bb28(DAT_00111ee4,param_1,param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29c) = DAT_00111edc;
  }
  FUN_00369a68(param_1,param_2);
  return;
}
