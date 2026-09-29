// OoT3D decomp @ 004221ac  name=FUN_004221ac  size=172

void FUN_004221ac(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;

  uVar2 = DAT_0042225c;
  bVar5 = *(char *)(param_1 + 0x1c0) != '\0';
  cVar1 = '\0';
  if (bVar5) {
    cVar1 = *DAT_00422258;
  }
  if (bVar5 && cVar1 != '\0') {
    FUN_002fb074(DAT_0042225c,*(undefined4 *)(param_1 + 0x1bc));
    uVar4 = 0xf0;
    if (((*DAT_00422260 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00422260), iVar3 != 0)) {
      FUN_0036788c(DAT_00422264);
    }
    if (*(char *)(DAT_00422264 + 0x75) == '\0') {
      uVar4 = 0x1e0;
    }
    FUN_00447550(uVar2,0,0,0,0,0,uVar4,400);
    return;
  }
  return;
}
