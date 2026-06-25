// OoT3D decomp @ 00359690  name=FUN_00359690  size=64

undefined4 FUN_00359690(int param_1,uint param_2)

{
  ushort uVar1;
  
  if (((param_2 < 0x32) && (uVar1 = *(ushort *)(param_1 + param_2 * 2 + 0x156c), (uVar1 & 1) != 0))
     && ((uVar1 & 2) == 0)) {
    return *(undefined4 *)(param_1 + param_2 * 0x6c + 0x54);
  }
  return 0;
}

