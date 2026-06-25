// OoT3D decomp @ 00324f44  name=FUN_00324f44  size=140

uint FUN_00324f44(int param_1,undefined *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  ulonglong uVar4;
  uint local_20;
  
  uVar1 = 0;
  local_20 = param_4;
  do {
    do {
      uVar2 = uVar1;
      if ((param_1 != 0) && (param_3 <= uVar2)) {
        return uVar2;
      }
      puVar3 = param_2 + 1;
      uVar4 = FUN_0044827c(&local_20,*param_2,0);
      if ((int)uVar4 == -1) {
        return 0xffffffff;
      }
      uVar1 = uVar2;
      param_2 = puVar3;
    } while ((int)uVar4 == -2);
    if (param_1 != 0) {
      uVar4 = CONCAT44(param_1 + uVar2 * 2,local_20) & 0xffffffff0000ffff;
    }
    if (param_1 != 0) {
      *(undefined2 *)(uVar4 >> 0x20) = (short)uVar4;
    }
    uVar1 = uVar2 + 1;
  } while ((short)local_20 != 0);
  return uVar2;
}

