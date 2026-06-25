// OoT3D decomp @ 0034913c  name=FUN_0034913c  size=280

void FUN_0034913c(undefined4 param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  
  iVar5 = DAT_00349260;
  iVar4 = DAT_0034925c;
  iVar3 = DAT_00349258;
  if (*(char *)(DAT_00349254 + param_2) == 'V') {
    return;
  }
  cVar1 = (char)((*(ushort *)(DAT_00349258 + 0x8a) & *(ushort *)(DAT_0034925c + 2)) >>
                *(sbyte *)(DAT_00349260 + 1));
  *(char *)(param_2 + 0x1a6) = cVar1;
  *(char *)(param_2 + 0x1a4) =
       (char)((*(ushort *)(iVar3 + 0x8a) & *(ushort *)(iVar4 + 4)) >> *(sbyte *)(iVar5 + 2)) + -1;
  *(char *)(param_2 + 0x1a7) =
       (char)((*(ushort *)(iVar3 + 0x8a) & *(ushort *)(iVar4 + 6)) >> *(sbyte *)(iVar5 + 3)) + -1;
  cVar6 = *(char *)(iVar3 + 0x156f);
  if ((cVar6 != -1) && (cVar6 = *(char *)(iVar3 + 0x80), cVar6 == 'U')) {
    cVar6 = '=';
  }
  *(char *)(param_2 + 0x1a5) = cVar6;
  uVar7 = (uint)*(byte *)(DAT_00349268 + *(char *)(DAT_00349264 + param_2));
  if (((uVar7 == 2) && (*(int *)(iVar3 + 4) != 0)) && (cVar1 == '\x02')) {
    uVar7 = 1;
  }
  *(char *)(param_2 + 0x1b0) = (char)uVar7;
  if (uVar7 == 1) {
    *(undefined *)(param_2 + 0x1b3) = 0;
  }
  else {
    bVar2 = *(byte *)(DAT_0034926c + uVar7 * 5);
    *(byte *)(param_2 + 0x1b3) = bVar2;
    if (2 < bVar2) goto LAB_00349238;
  }
  if (cVar1 == '\0') {
    *(undefined *)(param_2 + 0x1b3) = 0;
  }
LAB_00349238:
  FUN_0032c2c0(param_2);
  FUN_003589dc(param_1,param_2);
  return;
}

