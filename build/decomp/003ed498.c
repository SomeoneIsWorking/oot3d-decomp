// OoT3D decomp @ 003ed498  name=FUN_003ed498  size=116

void FUN_003ed498(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;

  uVar8 = FUN_0037571c(param_2);
  uVar4 = DAT_003ed51c;
  uVar3 = DAT_003ed514;
  uVar2 = DAT_003ed510;
  uVar1 = DAT_003ed50c;
  iVar6 = (int)((ulonglong)uVar8 >> 0x20);
  bVar7 = (int)uVar8 != 0;
  iVar5 = 0;
  if (bVar7) {
    iVar5 = param_2 + 0x2000;
    iVar6 = *(int *)(&DAT_000022dc + param_2);
  }
  if (bVar7 && iVar6 != 0) {
    if (*(ushort *)(DAT_003ed518 + param_2) < 0x3c) {
      *(undefined4 *)(param_1 + 0x140) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x140) = DAT_003ed51c;
    }
    if (**(short **)(iVar5 + 0x2dc) != 2) {
      return;
    }
    *(undefined4 *)(param_1 + 0x140) = uVar4;
  }
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  *(undefined4 *)(param_1 + 0x74) = uVar2;
  *(undefined4 *)(param_1 + 0x1ac) = uVar3;
  return;
}
