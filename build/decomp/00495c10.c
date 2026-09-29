// OoT3D decomp @ 00495c10  name=FUN_00495c10  size=464

void FUN_00495c10(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;

  *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x20;
  iVar3 = FUN_0036b4ec(param_1 + 0x254);
  iVar4 = DAT_00495de4;
  if (iVar3 == 0) {
    if (-1 < *(short *)(param_1 + 0x2238)) {
      FUN_00360a1c(param_1,DAT_00495df8);
    }
  }
  else if (*(short *)(param_1 + 0x2238) < 0) {
    FUN_002c0948(param_1,param_2);
  }
  else if (*(char *)(DAT_00495de0 + param_1) == 0) {
    *(undefined2 *)(param_1 + 0x224e) = 0;
    if (*(short *)(iVar4 + *(int *)(param_1 + 0x172c)) != -1) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
    }
    FUN_00336bbc(param_2);
  }
  else {
    if ('*' < *(char *)(param_1 + 0x1ac)) {
      sVar1 = *(short *)(DAT_00495dec +
                         (uint)*(byte *)(*(char *)(DAT_00495de0 + param_1) + DAT_00495de8) * 6 + -4)
      ;
      if (sVar1 < 0) {
        sVar1 = -sVar1;
      }
      *(short *)(param_1 + 0x224e) = sVar1;
    }
    if (*(short *)(param_1 + 0x2238) == 0) {
      FUN_00367c7c(param_2,*(undefined2 *)(param_1 + 0x116),param_1);
      if (*(char *)(param_1 + 0x1ac) == '-' || *(char *)(param_1 + 0x1ac) == '0') {
        FUN_0036f59c(param_1,DAT_00495df0);
      }
      *(undefined2 *)(param_1 + 0x2238) = 1;
    }
    else {
      iVar4 = FUN_003769d8(param_2 + 0x28a0);
      if (iVar4 == 2) {
        *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffeff;
        *(undefined2 *)(param_1 + 0x224e) = 0;
        if (*(char *)(param_1 + 0x2237) == '\x01') {
          FUN_003604f0(param_1 + 0x254,param_2,DAT_00495df4);
          *(undefined2 *)(param_1 + 0x2238) = 0xffff;
        }
        else {
          FUN_002c0948(param_1,param_2);
        }
        FUN_0036c5bc(param_2,0);
        FUN_0036ae48();
      }
    }
  }
  if ((*(char *)(param_1 + 0x2237) == '\0') && (*(int *)(param_1 + 0x16f8) != 0)) {
    uVar2 = FUN_003341e4(param_1,0);
    *(undefined2 *)(param_1 + 0xbe) = uVar2;
    *(undefined2 *)(param_1 + 0x2220) = uVar2;
  }
  return;
}
