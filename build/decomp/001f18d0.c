// OoT3D decomp @ 001f18d0  name=FUN_001f18d0  size=140

void FUN_001f18d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*UNK_001f195c & 1) == 0) && (iVar1 = FUN_003679b4(UNK_001f195c), iVar1 != 0)) {
    FUN_0036788c(UNK_001f1960);
  }
  FUN_00348904(*(undefined4 *)(UNK_001f196c + 0x47c),*(undefined4 *)(param_1 + 0x544));
  *(undefined4 *)(param_1 + 0x544) = 0;
  if (*(int *)(param_1 + 0x548) != 0) {
    uVar2 = FUN_003488e4();
    (**(code **)(*(int *)*UNK_001f1970 + 0x10))((int *)*UNK_001f1970,uVar2);
    *(undefined4 *)(param_1 + 0x548) = 0;
  }
  return;
}

