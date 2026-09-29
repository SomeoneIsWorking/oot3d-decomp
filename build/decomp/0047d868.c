// OoT3D decomp @ 0047d868  name=FUN_0047d868  size=156

void FUN_0047d868(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_18;

  uVar2 = 0;
  switch(param_1) {
  case 0:
    uVar2 = DAT_0047d944;
    break;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    uVar2 = DAT_0047d948;
    break;
  case 0xd:
    goto switchD_0047d87c_caseD_d;
  case 0xe:
    uVar2 = DAT_0047d94c;
    break;
  case 0xf:
    uVar2 = DAT_0047d950;
  }
  local_18 = param_4;
  uVar1 = FUN_0030f0ec();
  iVar3 = DAT_0047d954 + param_1 * 4;
  FUN_002dd484(uVar1,iVar3,uVar2,0);
  if (param_2 != 0) {
    FUN_0030ee14(&local_18,iVar3);
    if (local_18 != 0) {
      FUN_0030c198(local_18,1);
    }
    FUN_0030ede0(&local_18);
    *DAT_0047d958 = 1;
  }
switchD_0047d87c_caseD_d:
  return;
}
