// OoT3D decomp @ 001805a8  name=FUN_001805a8  size=172

void FUN_001805a8(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_00370378(param_1 + 0xbe,0xffffc000);
  iVar2 = FUN_0036bc98(param_1,param_2);
  if (iVar2 == 0) {
    if (*(char *)(DAT_00180658 + param_2) == '\x05') {
      FUN_00374428(param_1);
      *(undefined2 *)(DAT_0018065c + 0x5e) = 0;
    }
    else {
      iVar2 = FUN_0034cc28(DAT_00180660,param_1,0x3000);
      uVar1 = DAT_0018066c;
      if (iVar2 != 0) {
        *(undefined2 *)(DAT_00180668 + param_1) = *(undefined2 *)(DAT_00180664 + param_1);
        FUN_0036bb28(uVar1,param_1,param_2);
      }
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb18) = DAT_00180654;
  }
  FUN_00373264(param_1,DAT_00180670);
  return;
}
