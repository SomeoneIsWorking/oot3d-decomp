// OoT3D decomp @ 0049907c  name=FUN_0049907c  size=260

void FUN_0049907c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  FUN_0036b4ec(param_1 + 0x254);
  sVar1 = *(short *)(param_1 + 0x2238);
  *(short *)(param_1 + 0x2238) = sVar1 + 1;
  iVar4 = DAT_00499190;
  if ((8 < sVar1) && (*(char *)(DAT_00499180 + param_2) == '\0')) {
    if (*(char *)(param_1 + 0x2237) == '\0') {
      *(undefined1 *)(param_2 + 0x5c76) = 2;
      *(undefined1 *)(iVar4 + 0x5ab) = 2;
      *(undefined4 *)(iVar4 + 0x558) = 0xff;
      *(undefined1 *)(iVar4 + 0x56e) = 0xff;
    }
    else {
      if (*(short *)(param_2 + 0x104) == 9) {
        FUN_0036f4f0(param_2);
        FUN_003716f0(param_2,0x88,0x14,4);
      }
      else if (*(char *)(param_1 + 0x2237) < '\0') {
        FUN_0036f4f0();
      }
      else {
        FUN_0036ebdc(param_2);
      }
      uVar3 = DAT_00499188;
      uVar2 = DAT_00499184;
      *(undefined1 *)(param_2 + 0x5c76) = 4;
      FUN_0037547c(DAT_0049918c,0,4,uVar3,uVar3,uVar2);
    }
    *(undefined1 *)(param_2 + 0x5c2d) = 0x14;
  }
  return;
}
