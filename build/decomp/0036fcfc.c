// OoT3D decomp @ 0036fcfc  name=FUN_0036fcfc  size=212

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0036fcfc(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;

  uVar2 = DAT_0036fdd4;
  uVar1 = DAT_0036fdd0;
  if ((((param_3 < 2 || param_3 == 3) &&
       (FUN_0036f00c(DAT_0036fdd4,DAT_0036fdd0,param_2,param_1,param_1 + 0x314,param_4),
       param_3 == 0)) || (param_3 == 2 || param_3 == 3)) &&
     (FUN_0036f00c(uVar2,uVar1,param_2,param_1,param_1 + 800,param_4), param_3 == 0)) {
    FUN_0037547c(DAT_0036fdd8,param_1 + 0x28,4,DAT_00375c04);
    return;
  }
  FUN_00375bcc(param_1,DAT_0036fddc);
  return;
}
