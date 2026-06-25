// OoT3D decomp @ 00349574  name=FUN_00349574  size=104

undefined4 FUN_00349574(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x1710);
  if ((*(int *)(param_1 + 0x16f8) == 0) || ((~*(uint *)(*(int *)(param_1 + 0x16f8) + 4) & 5) != 0))
  {
    if (((uVar2 & 0x10) != 0) &&
       (*(uint *)(param_1 + 0x1710) = uVar2 & 0xffffffef,
       *(float *)(param_1 + 0x221c) == DAT_003495dc)) {
      *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
    }
    uVar1 = 0;
  }
  else {
    *(uint *)(param_1 + 0x1710) = uVar2 | 0x10;
    uVar1 = 1;
  }
  return uVar1;
}

