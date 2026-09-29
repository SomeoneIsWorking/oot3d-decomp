// OoT3D decomp @ 00418790  name=FUN_00418790  size=200

void FUN_00418790(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_21c [524];

  FUN_00324f44(auStack_21c,s_rom__menu_home_nix_sign_ctxb_00418858,DAT_00418878);
  piVar1 = (int *)FUN_00301300(auStack_21c,0,0);
  if ((piVar1 != (int *)0x0) && (iVar2 = FUN_0031b9c0(piVar1,1), iVar2 != 0)) {
    if (*piVar1 < 0) {
      FUN_0030e3ac(*piVar1,s_rom__menu_home_nix_sign_ctxb_00418858 + 0x1c,0,
                   s_rom__menu_home_nix_sign_ctxb_00418858 + 0x1c);
      FUN_002fb928(0);
    }
    iVar2 = (**(code **)(*(int *)*DAT_0041887c + 8))((int *)*DAT_0041887c,0x54);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = FUN_00303ea8(piVar1);
      uVar3 = FUN_003012b4(iVar2,uVar3,0);
    }
    *param_1 = uVar3;
    FUN_00301260(piVar1);
  }
  FUN_0031b99c(piVar1);
  return;
}
