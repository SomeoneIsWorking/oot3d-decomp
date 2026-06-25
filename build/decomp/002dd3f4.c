// OoT3D decomp @ 002dd3f4  name=FUN_002dd3f4  size=120

undefined4 FUN_002dd3f4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < DAT_002dd46c) {
    return 0;
  }
  if (param_1 < DAT_002dd470) {
    return 1;
  }
  if (param_1 < DAT_002dd474) {
    return 2;
  }
  if (DAT_002dd478 <= param_1) {
    if (DAT_002dd47c <= param_1) {
      if (param_1 < DAT_002dd480) {
        uVar1 = 5;
      }
      else {
        uVar1 = 6;
      }
      return uVar1;
    }
    return 4;
  }
  return 3;
}

