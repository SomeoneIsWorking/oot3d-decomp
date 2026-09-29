// OoT3D decomp @ 00293790  name=FUN_00293790  size=180

void FUN_00293790(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00376340(DAT_00293848,DAT_00293844,DAT_00293844,param_2,param_1,4);
  FUN_00330370(param_1);
  FUN_0032cd68(param_1,param_2);
  iVar1 = FUN_0037571c(param_2);
  psVar2 = (short *)0x0;
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x22ec);
  }
  if ((iVar1 != 0 && psVar2 != (short *)0x0) && (*psVar2 == 9)) {
    if (*(short *)(param_2 + 0x104) == 0x61) {
      *(undefined4 *)(param_1 + 3000) = 0x13;
      *(undefined4 *)(param_1 + 0xbbc) = 0;
      *(undefined1 *)(param_1 + 0xd0) = 0;
    }
    else {
      FUN_00374428(param_1);
    }
  }
  if (*(int *)(param_1 + 3000) != 0x4d) {
    *(undefined4 *)(param_1 + 3000) = 0x4e;
  }
  return;
}
