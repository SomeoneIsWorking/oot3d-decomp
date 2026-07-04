// OoT3D decomp @ 001f1344  name=FUN_001f1344  size=152

void FUN_001f1344(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x270) != 0) {
    if (((*UNK_001f13dc & 1) == 0) && (iVar1 = FUN_003679b4(UNK_001f13dc), iVar1 != 0)) {
      FUN_0036788c(UNK_001f13e0);
    }
    FUN_00348904(*(undefined4 *)(UNK_001f13ec + 0x47c),*(undefined4 *)(param_1 + 0x270));
    *(undefined4 *)(param_1 + 0x270) = 0;
  }
  if (*(int *)(param_1 + 0x26c) != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*UNK_001f13f0 + 0x10))((int *)*UNK_001f13f0,uVar2);
    *(undefined4 *)(param_1 + 0x26c) = 0;
  }
  return;
}

