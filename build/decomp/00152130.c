// OoT3D decomp @ 00152130  name=FUN_00152130  size=152

void FUN_00152130(int param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  int extraout_r2;
  int iVar6;
  ushort *extraout_r3;
  ushort *puVar7;

  iVar3 = FUN_0037571c(param_2);
  puVar7 = extraout_r3;
  iVar6 = extraout_r2;
  if (iVar3 != 0) {
    iVar6 = param_2 + 0x2000;
    puVar7 = *(ushort **)(&DAT_000022dc + param_2);
  }
  if (iVar3 != 0 && puVar7 != (ushort *)0x0) {
    cVar1 = *(char *)(param_1 + 0x1a4);
    uVar4 = param_1 + 0x100;
    if (cVar1 == '\0') {
      *(undefined2 *)(param_1 + 500) = 0;
      if (**(short **)(iVar6 + 0x2dc) == 2) {
        uVar2 = 1;
LAB_001521c0:
        *(undefined1 *)(param_1 + 0x1a4) = uVar2;
        return;
      }
    }
    else if (cVar1 == '\x01') {
      uVar5 = *(short *)(param_1 + 500) + 1;
      *(ushort *)(param_1 + 500) = uVar5;
      if (6 < uVar5) {
        uVar2 = 2;
        goto LAB_001521c0;
      }
    }
    else {
      if (cVar1 == '\x02') {
        uVar4 = (uint)*puVar7;
      }
      if (cVar1 == '\x02' && uVar4 == 1) {
        *(undefined1 *)(param_1 + 0x1a4) = 0;
      }
    }
  }
  return;
}
