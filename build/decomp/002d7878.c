// OoT3D decomp @ 002d7878  name=FUN_002d7878  size=56

void FUN_002d7878(int param_1,int param_2,undefined param_3,undefined2 param_4,undefined2 param_5)

{
  undefined *puVar1;
  
  puVar1 = (undefined *)(DAT_002d78b0 + param_1 * 0x40 + param_2 * 0x10);
  puVar1[1] = 0;
  puVar1[2] = param_3;
  *(undefined2 *)(puVar1 + 6) = param_4;
  *(undefined2 *)(puVar1 + 4) = param_5;
  *puVar1 = 1;
  return;
}

