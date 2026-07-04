// OoT3D decomp @ 00394550  name=FUN_00394550  size=104

undefined4 FUN_00394550(undefined4 param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (*(int *)(param_3 + 4) != 0) {
    uVar1 = FUN_0032e21c((undefined1 *)(param_2 + 0x3a58),(int)(short)*(int *)(param_3 + 4),param_2)
    ;
    *(undefined1 *)(param_2 + 0x3a59) = *(undefined1 *)(param_2 + 0x3a58);
    *(undefined1 *)(iRam003945b8 + param_2) = uVar1;
  }
  if (*(byte *)(param_3 + 1) != 0) {
    *(undefined4 *)(iRam003945c0 + param_2) =
         *(undefined4 *)(iRam003945bc + (*(byte *)(param_3 + 1) - 1) * 4);
  }
  return 1;
}

