// OoT3D decomp @ 0048961c  name=FUN_0048961c  size=152

void FUN_0048961c(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < DAT_004896b4) {
    uVar2 = 0;
  }
  else if (param_1 < DAT_004896b8) {
    uVar2 = 1;
  }
  else if (param_1 < DAT_004896bc) {
    uVar2 = 2;
  }
  else if (param_1 < DAT_004896c0) {
    uVar2 = 3;
  }
  else if (param_1 < DAT_004896c4) {
    uVar2 = 4;
  }
  else if (param_1 < DAT_004896c8) {
    uVar2 = 5;
  }
  else {
    uVar2 = 6;
  }
  uVar1 = FUN_0030f0ec();
  uVar2 = FUN_0030f0c0(uVar1,uVar2);
  *(uint *)(DAT_004896cc + 0x28) = param_1;
  FUN_0030efb0(uVar2,DAT_004896d0,0);
  return;
}

