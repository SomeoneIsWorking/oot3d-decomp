// OoT3D decomp @ 004896d4  name=FUN_004896d4  size=164

int FUN_004896d4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;

  iVar1 = DAT_00489778;
  *(undefined1 *)(DAT_00489778 + 3) = 0;
  if (param_1 < DAT_0048977c) {
    uVar3 = 0;
  }
  else if (param_1 < DAT_00489780) {
    uVar3 = 1;
  }
  else if (param_1 < DAT_00489784) {
    uVar3 = 2;
  }
  else if (param_1 < DAT_00489788) {
    uVar3 = 3;
  }
  else if (param_1 < DAT_0048978c) {
    uVar3 = 4;
  }
  else if (param_1 < DAT_00489790) {
    uVar3 = 5;
  }
  else {
    uVar3 = 6;
  }
  uVar2 = FUN_0030f0ec();
  uVar2 = FUN_0030f0c0(uVar2,uVar3);
  uVar3 = DAT_00489794;
  *(uint *)(iVar1 + 0x28) = param_1;
  FUN_0030efb0(uVar2,uVar3,0);
  return (int)*(char *)(iVar1 + 3);
}
