// OoT3D decomp @ 0040fb94  name=FUN_0040fb94  size=140

void FUN_0040fb94(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;

  if ((*(uint *)(*param_1 + 0x1c) & 4) == 0) {
    puVar1 = *(undefined4 **)(*param_2 + 8);
    if ((DAT_0040fbc4 == 0x404 && *DAT_0040fbc0 == 0x900) ||
       (DAT_0040fbc4 == 0x405 && *DAT_0040fbc0 == 0x901)) {
      uVar3 = 2;
    }
    else {
      uVar3 = 1;
    }
    *puVar1 = uVar3;
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_00408ef4;
    iVar2 = *param_2;
  }
  else {
    puVar1 = *(undefined4 **)(*param_2 + 8);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    *puVar1 = DAT_003141c8;
    iVar2 = *param_2;
  }
  *(undefined4 **)(iVar2 + 8) = puVar1 + 1;
  return;
}
