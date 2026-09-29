// OoT3D decomp @ 002744b8  name=FUN_002744b8  size=184

void FUN_002744b8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x1a4);
  iVar2 = FUN_003769d8(param_2 + 0x28a0);
  if ((iVar2 == 4) && (iVar2 = FUN_00346964(param_2), iVar2 != 0)) {
    *(undefined2 *)(DAT_00274570 + param_1) = 5;
    iVar2 = FUN_00369f3c(param_2);
    uVar1 = DAT_00274574;
    if (iVar2 == 0) {
      if (*(short *)(DAT_0027457c + 0x48) < 10) {
        *(short *)(param_1 + 0x116) = (short)DAT_00274580;
        *(undefined4 *)(param_1 + 0x8a8) = uVar1;
      }
      else {
        FUN_00376a60(0xfffffff6);
        *(short *)(param_1 + 0x116) = (short)DAT_00274584;
        *(undefined4 *)(param_1 + 0x8a8) = DAT_00274588;
      }
    }
    else if (iVar2 == 1) {
      *(short *)(param_1 + 0x116) = (short)DAT_00274578;
      *(undefined4 *)(param_1 + 0x8a8) = uVar1;
    }
    FUN_0036be34(param_2,*(undefined2 *)(param_1 + 0x116));
    return;
  }
  return;
}
